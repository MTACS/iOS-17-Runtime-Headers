
@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _OID;
    NSString * _matchingId;
    NSString * _message;
    NSString * _smdpAddress;
    NSString * _title;
}

@property (nonatomic, retain) NSString *OID;
@property (nonatomic, retain) NSString *matchingId;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSString *smdpAddress;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)OID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)matchingId;
- (id)message;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (void)setMatchingId:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setOID:(id)arg1;
- (void)setSmdpAddress:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)smdpAddress;
- (id)title;

@end
