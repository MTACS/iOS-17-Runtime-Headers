
@interface _NSThreadData : NSObject {
    id  _argument;
    _Atomic unsigned long long  _pac_signature;
    SEL  _selector;
    id  _target;
    struct _opaque_pthread_attr_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  attr;
    unsigned char  cancel;
    double  defpri;
    id  dict;
    id  name;
    NSMutableDictionary * performD;
    id  performQ;
    double  pri;
    BOOL  qos;
    unsigned char  qstate;
    int  seqNum;
    _Atomic unsigned char  status;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * tid;
}

- (id)init;

@end
