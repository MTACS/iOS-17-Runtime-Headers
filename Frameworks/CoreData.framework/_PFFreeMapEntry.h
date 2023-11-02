
@interface _PFFreeMapEntry : NSObject {
    NSMutableSet * _owners;
    int  _retainCount;
}

- (void)dealloc;
- (id)init;

@end
