
@interface IFObjectHasher : NSObject {
    bool  _finalized;
    unsigned long long  _hash;
    struct SipHasher { 
        int _c; 
        int _d; 
        unsigned long long _v0; 
        unsigned long long _v1; 
        unsigned long long _v2; 
        unsigned long long _v3; 
        struct TailBuffer { 
            unsigned long long value; 
        } _buffer; 
    }  _hasher;
}

- (id).cxx_construct;
- (id)combine:(id)arg1;
- (id)combineBool:(bool)arg1;
- (id)combineBytes:(void*)arg1 size:(unsigned long long)arg2;
- (id)combineContentsOfPropertyListObject:(id)arg1;
- (id)combineInteger:(unsigned long long)arg1;
- (unsigned long long)finalize;

@end
