
@interface _NSXPCConnectionExpectedReplies : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFDictionary { } * _replyTable;
    unsigned long long  _sequence;
}

- (void)dealloc;
- (id)init;

@end
