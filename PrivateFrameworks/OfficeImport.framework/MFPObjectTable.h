
@interface MFPObjectTable : NSObject {
    NSMutableDictionary * mObjects;
}

- (void).cxx_destruct;
- (id)init;
- (id)objectAtIndex:(int)arg1;
- (void)setObject:(id)arg1 atIndex:(int)arg2;

@end
