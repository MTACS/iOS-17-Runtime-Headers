
@interface EDAMUserIdentity : FATObject {
    NSNumber * _longIdentifier;
    NSString * _stringIdentifier;
    NSNumber * _type;
}

@property (nonatomic, retain) NSNumber *longIdentifier;
@property (nonatomic, retain) NSString *stringIdentifier;
@property (nonatomic, retain) NSNumber *type;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)longIdentifier;
- (void)setLongIdentifier:(id)arg1;
- (void)setStringIdentifier:(id)arg1;
- (void)setType:(id)arg1;
- (id)stringIdentifier;
- (id)type;

@end
