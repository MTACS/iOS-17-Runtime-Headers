
@interface BRCDirectoryEnumerator : NSObject {
    int * _err;
    bool  _recursive;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (id)initForEnumeratingBelow:(id)arg1 recursive:(bool)arg2 error:(int*)arg3;
- (id)nextObject;

@end
