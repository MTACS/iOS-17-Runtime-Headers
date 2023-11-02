
@interface AVContentKeySessionInternal : NSObject {
    NSData * _appIdentifier;
    struct CMBaseObject { } * _contentKeyBoss;
    NSMutableArray * _contentKeyGroups;
    NSHashTable * _contentKeyRecipients;
    AVContentKeyReportGroup * _defaultContentKeyGroup;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _delegateReadWriteQueue;
    AVWeakReferencingDelegateStorage * _delegateStorage;
    bool  _internal;
    bool  _isExpired;
    NSString * _keySystem;
    NSData * _protectorSessionIdentifier;
    NSURL * _storageURL;
    NSObject<OS_dispatch_queue> * _threadSafetyQ;
    bool  _useContentKeyBoss;
    AVWeakReference * _weakReference;
    NSMapTable * contentKeyRequestByKeySpecifierMap;
    NSMapTable * cryptorUUIDToContentKeyRequestMap;
    NSMutableDictionary * cryptorsByIdentifer;
    NSMutableDictionary * keyRequestParamsByRequestID;
    NSMutableDictionary * keyRequestTrackerByRequestID;
    NSMutableDictionary * keyRequestsByRequestID;
}

@end
