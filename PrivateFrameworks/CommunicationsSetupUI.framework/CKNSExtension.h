
@interface CKNSExtension : NSObject {
    id  _beginMappingID;
}

@property (nonatomic, retain) id beginMappingID;

- (void).cxx_destruct;
- (id)beginMappingID;
- (void)beginMatchingExtensions:(id /* block */)arg1;
- (void)dealloc;
- (void)endMatchingExtensions;
- (void)setBeginMappingID:(id)arg1;

@end