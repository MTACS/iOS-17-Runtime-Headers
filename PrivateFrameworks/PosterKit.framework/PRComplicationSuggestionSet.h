
@interface PRComplicationSuggestionSet : NSObject {
    NSArray * _descriptors;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) NSArray *descriptors;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

- (void).cxx_destruct;
- (id)descriptors;
- (unsigned long long)hash;
- (id)initWithDescriptors:(id)arg1 localizedTitle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;

@end
