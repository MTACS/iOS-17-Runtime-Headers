
@interface PHASEDefinition : NSObject {
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *uid;

+ (id)new;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initInternal;
- (void)setIdentifier:(id)arg1;
- (void)setUid:(id)arg1;
- (id)uid;

@end
