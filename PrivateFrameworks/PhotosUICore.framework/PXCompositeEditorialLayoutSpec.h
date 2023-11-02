
@interface PXCompositeEditorialLayoutSpec : NSObject {
    long long  _maxNumberOfRects;
    long long  _minNumberOfColumns;
    long long  _minNumberOfRects;
    NSMapTable * _preferredNextTemplatesByCurrentTemplate;
    NSArray * _templates;
}

@property (nonatomic, readonly) long long maxNumberOfRects;
@property (nonatomic, readonly) long long minNumberOfColumns;
@property (nonatomic, readonly) long long minNumberOfRects;
@property (nonatomic, readonly) NSMapTable *preferredNextTemplatesByCurrentTemplate;
@property (nonatomic, readonly) NSArray *templates;

+ (id)defaultSpec;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (long long)maxNumberOfRects;
- (long long)minNumberOfColumns;
- (long long)minNumberOfRects;
- (id)preferredNextTemplatesByCurrentTemplate;
- (id)preferredNextTemplatesForTemplate:(id)arg1;
- (void)prepareBuiltinSpec;
- (id)templates;

@end
