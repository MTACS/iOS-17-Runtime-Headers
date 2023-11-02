
@interface VKResourceManager : NSObject {
    NSBundle * _vkBundle;
}

- (void).cxx_destruct;
- (id)_localNameForResourceName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1;
- (id)dataForResourceWithName:(id)arg1 fallbackNameHandler:(id /* block */)arg2;
- (id)init;
- (bool)isDevResourceWithName:(id)arg1;
- (id)pathForResourceWithName:(id)arg1;

@end
