
@interface _ACPluginDBDirectory : NSObject <NSSecureCoding> {
    NSMutableDictionary * mBundlesByName;
    NSData * mCarbonComponentHash;
    NSMutableArray * mChangedBundlePaths;
    bool  mComponentsLoadable;
    double  mCurrentModificationDate;
    _ACPluginDB * mDB;
    struct __FSEventStream { } * mFSMonitor;
    NSString * mFullPath;
    double  mModificationDate;
    unsigned long long  mNrOfPathsChanged;
    int  mPriority;
    bool  mShouldRescan;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)bundlesChanged:(id)arg1 shouldRescan:(bool)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)eventStreamCallback:(id)arg1 flags:(const unsigned int*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1 priority:(int)arg2;
- (void)loadAllComponents:(void*)arg1;
- (void)monitorDirectory;
- (bool)refreshModificationDate;
- (id)scanBundle:(id)arg1 loadable:(bool)arg2;
- (void)scanDirectory;

@end
