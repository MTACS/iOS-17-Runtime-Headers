
@interface PMLPlistClassWrapper : NSObject {
    NSString * _classNameKey;
}

- (void).cxx_destruct;
- (id)initWithClassNameKey:(id)arg1;
- (id)readObjectWithData:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)readObjectWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)writeToDataWithObject:(id)arg1 andChunks:(id)arg2;
- (id)writeToPlistWithObject:(id)arg1 andChunks:(id)arg2;

@end
