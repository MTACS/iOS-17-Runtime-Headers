
@interface CPSystemCoordinatorParticipantState : NSObject <NSSecureCoding> {
    void isSpatial;
    void isSpatialInitiator;
}

@property (nonatomic, readonly) long long hash;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
