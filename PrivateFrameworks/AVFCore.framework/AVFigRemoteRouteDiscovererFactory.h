
@interface AVFigRemoteRouteDiscovererFactory : NSObject <AVFigRouteDiscovererFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct OpaqueFigRouteDiscoverer { }*)createRouteDiscovererWithAllocator:(struct __CFAllocator { }*)arg1 options:(struct __CFDictionary { }*)arg2;

@end
