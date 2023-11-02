
@interface _UIViewBackingAux : NSObject {
    NSMutableArray * _allSubviewsCache;
    NSString * _captureGroupName;
    UIVisualEffectBackingHost * _effectHost;
    CALayer * _intermediateLayer;
    CALayer * _intermediateLayerRetained;
    NSMutableSet * _privateSubviews;
}

- (void).cxx_destruct;

@end
