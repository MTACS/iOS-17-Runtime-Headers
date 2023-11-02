
@interface PDAnimation : NSObject {
    OITSUNoCopyDictionary * mBuildMap;
    PDRootTimeNode * mRootTimeNode;
}

+ (id)entranceSubTypeMap;
+ (id)exitSubTypeMap;

- (void).cxx_destruct;
- (id)addRootTimeNode;
- (id)buildMap;
- (id)description;
- (id)init;
- (id)rootTimeNode;
- (void)setBuildMap:(id)arg1;

@end
