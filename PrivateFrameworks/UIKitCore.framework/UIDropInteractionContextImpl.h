
@interface UIDropInteractionContextImpl : NSObject <UIDropInteractionContext> {
    NSArray * _items;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)items;
- (void)setItems:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
