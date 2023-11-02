
@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableDictionary * _deletes;
    NSUUID * _homeModelID;
    NSMutableSet * _inserts;
    bool  _shouldTransform;
    NSMutableDictionary * _updates;
}

- (void).cxx_destruct;
- (id)description;

@end
