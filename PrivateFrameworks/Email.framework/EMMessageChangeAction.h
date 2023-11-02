
@interface EMMessageChangeAction : NSObject <EFPubliclyDescribable, NSSecureCoding> {
    long long  _actor;
    NSArray * _objectIDs;
    long long  _origin;
}

@property (nonatomic) long long actor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *objectIDs;
@property (nonatomic) long long origin;
@property (nonatomic, readonly) long long signpostType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actor;
- (id)debugDescription;
- (id)description;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageListItems:(id)arg1 origin:(long long)arg2 actor:(long long)arg3;
- (id)initWithObjectIDs:(id)arg1 origin:(long long)arg2 actor:(long long)arg3;
- (id)objectIDs;
- (long long)origin;
- (void)setActor:(long long)arg1;
- (void)setOrigin:(long long)arg1;
- (long long)signpostType;

@end
