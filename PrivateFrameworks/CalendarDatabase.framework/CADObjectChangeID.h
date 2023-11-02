
@interface CADObjectChangeID : NSObject <NSSecureCoding> {
    long long  _changeID;
    int  _entityType;
}

@property (nonatomic, readonly) long long changeID;
@property (nonatomic, readonly) int entityType;

+ (bool)supportsSecureCoding;

- (long long)changeID;
- (void)encodeWithCoder:(id)arg1;
- (int)entityType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1 changeID:(long long)arg2;

@end
