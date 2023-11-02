
@interface _NSXPCConnectionRequestedReplies : NSObject {
    unsigned char  _invalid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFDictionary { } * _progressTable;
    struct __CFDictionary { } * _replyDictionaryTable;
    struct __CFDictionary { } * _replyTransactionTable;
}

- (void)dealloc;
- (id)init;

@end
