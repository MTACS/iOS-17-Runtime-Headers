
@interface BKCatacomb : NSObject {
    NSString * _catacombDir;
    NSDictionary * _writeAttributes;
}

@property (nonatomic, readonly, copy) NSString *catacombDir;

+ (id)catacombWithDir:(id)arg1;

- (void).cxx_destruct;
- (id)catacombCommitDir;
- (id)catacombDir;
- (id)catacombPrepareDir;
- (int)commitWrite;
- (id)content;
- (int)deleteAll;
- (int)deleteFile:(id)arg1;
- (id)init;
- (int)readData:(id*)arg1 fromFile:(id)arg2;
- (int)readData:(id*)arg1 fromFile:(id)arg2 logString:(id*)arg3;
- (int)recover;
- (int)syncDir:(id)arg1;
- (int)writeData:(id)arg1 toFile:(id)arg2;

@end
