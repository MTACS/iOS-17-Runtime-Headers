
@interface IMCollaborationClearTransmission : NSObject <NSSecureCoding> {
    NSString * _collaborationId;
    NSDate * _date;
    NSString * _guidString;
}

@property (nonatomic, readonly) NSString *collaborationId;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) NSString *guidString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationId;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)guidString;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationId:(id)arg1 date:(id)arg2 guidString:(id)arg3;

@end
