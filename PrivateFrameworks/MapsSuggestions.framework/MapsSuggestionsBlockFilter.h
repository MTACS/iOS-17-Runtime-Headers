
@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {
    id /* block */  _block;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (id)filterWithBlock:(id /* block */)arg1;
+ (bool)isEnabled;

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 name:(id)arg2;
- (bool)shouldKeepEntry:(id)arg1;
- (id)uniqueName;

@end
