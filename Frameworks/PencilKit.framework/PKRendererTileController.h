
@interface PKRendererTileController : NSObject {
    NSMutableDictionary * _tileFramebuffers;
    NSMutableDictionary * _tileMultiplyFramebuffers;
    NSObject<OS_dispatch_queue> * _tileQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
