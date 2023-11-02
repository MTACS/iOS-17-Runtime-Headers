
@protocol AXImageMonitor <NSObject>

@required

- (void)addImageMonitorObserver:(id <AXImageMonitorObserver>)arg1;
- (void)enumerateLoadedImagePaths:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (NSSet *)loadedImagePaths;
- (void)removeImageMonitorObserver:(id <AXImageMonitorObserver>)arg1;

@end
