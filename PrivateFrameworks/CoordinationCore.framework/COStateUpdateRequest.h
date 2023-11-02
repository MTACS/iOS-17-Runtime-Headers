
@interface COStateUpdateRequest : COMeshRequest <NSCopying> {
    NSDictionary * _removals;
    NSDictionary * _updates;
}

@property (nonatomic, readonly, copy) NSDictionary *removals;
@property (nonatomic, readonly, copy) NSDictionary *updates;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdates:(id)arg1 removals:(id)arg2;
- (id)removals;
- (id)updates;

@end
