
@interface SADyldInfo : NSObject {
    bool  _dyldInfoIsComplete;
    bool  _isSharedCache;
    unsigned long long  _loadAddress;
    NSMutableString * _path;
    bool  _pathIsComplete;
    unsigned long long  _stringID;
    SATask * _task;
    NSUUID * _uuid;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
