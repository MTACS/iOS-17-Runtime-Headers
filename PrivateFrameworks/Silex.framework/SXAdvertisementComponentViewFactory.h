
@interface SXAdvertisementComponentViewFactory : SXComponentViewFactory {
    <TFResolver> * _resolver;
}

@property (nonatomic, readonly) <TFResolver> *resolver;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)resolver;
- (int)role;
- (id)type;

@end
