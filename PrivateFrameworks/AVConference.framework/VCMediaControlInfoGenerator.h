
@interface VCMediaControlInfoGenerator : NSObject {
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _callbackDictLock;
    struct __CFDictionary { } * _callbacksDict;
    NSMutableArray * _controlInfoPool;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _controlInfoPoolLock;
    unsigned char  _fecFeedbackVersion;
    unsigned int  _optionBitmap;
    unsigned int  _type;
    unsigned char  _version;
}

@property unsigned char fecFeedbackVersion;
@property (readonly) unsigned int type;
@property (readonly) unsigned char version;

- (int)addMediaControlInfoOption:(unsigned int)arg1;
- (void)dealloc;
- (int)deregisterCallbacksWithContext:(void*)arg1;
- (unsigned char)fecFeedbackVersion;
- (unsigned long long)feedbackSize;
- (id)initWithType:(unsigned int)arg1 version:(unsigned char)arg2;
- (int)registerFillBlobCallback:(int (*)arg1 processBlobCallback:(int (*)arg2 context:(void*)arg3;
- (void)setFecFeedbackVersion:(unsigned char)arg1;
- (unsigned int)type;
- (unsigned char)version;

@end
