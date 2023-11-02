
@interface _LTDASRConfigurationModel : NSObject {
    NSArray * _localeIdentifiers;
    NSDictionary * _root;
}

@property (nonatomic, readonly) NSArray *localeIdentifiers;
@property (nonatomic, retain) NSDictionary *root;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)localeIdentifiers;
- (id)root;
- (void)setRoot:(id)arg1;

@end
