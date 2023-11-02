
@interface OSALogIdentity : NSObject <NSSecureCoding> {
    NSString * _bugType;
    NSString * _incidentID;
}

@property (nonatomic, readonly) NSString *bugType;
@property (nonatomic, readonly) NSString *incidentID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bugType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)incidentID;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentID:(id)arg1 bugType:(id)arg2;

@end
