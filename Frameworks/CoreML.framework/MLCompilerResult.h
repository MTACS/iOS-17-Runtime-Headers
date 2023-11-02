
@interface MLCompilerResult : NSObject {
    NSArray * _outputFiles;
}

@property (retain) NSArray *outputFiles;

+ (id)resultWithArchive:(void*)arg1;
+ (id)resultWithOutputFiles:(id)arg1;

- (void).cxx_destruct;
- (id)outputFiles;
- (void)setOutputFiles:(id)arg1;

@end
