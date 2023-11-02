
@interface MapsSuggestionsBaseAction : NSObject <MapsSuggestionsAction> {
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

- (void).cxx_destruct;
- (void)actWithHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1;
- (id)uniqueName;

@end
