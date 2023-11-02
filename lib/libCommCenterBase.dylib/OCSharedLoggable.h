
@interface OCSharedLoggable : NSObject {
    struct OsLogContext { 
        char *domain; 
        struct OSSharedRef<os_log_s> { 
            struct os_log_s {} *fRef; 
        } handle; 
    }  _logContext;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _queue;
}

@property (getter=getLogContext, nonatomic) struct OsLogContext { char *x1; struct OSSharedRef<os_log_s> { struct os_log_s {} *x_2_1_1; } x2; } logContext;
@property (getter=getQueue, nonatomic) struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; } queue;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)executeBlock:(id /* block */)arg1;
- (void)executeFunction:(struct function<void ()>={__value_func<void ()>={type=[24C] {})arg1;
- (struct OsLogContext { char *x1; struct OSSharedRef<os_log_s> { struct os_log_s {} *x_2_1_1; } x2; })getLogContext;
- (struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })getQueue;
- (id)initWithName:(const char *)arg1 qosClass:(unsigned int)arg2 logContext:(struct OsLogContext { char *x1; struct OSSharedRef<os_log_s> { struct os_log_s {} *x_2_1_1; } x2; })arg3;
- (id)initWithQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg1 logContext:(struct OsLogContext { char *x1; struct OSSharedRef<os_log_s> { struct os_log_s {} *x_2_1_1; } x2; })arg2;
- (void)setLogContext:(struct OsLogContext { char *x1; struct OSSharedRef<os_log_s> { struct os_log_s {} *x_2_1_1; } x2; })arg1;
- (void)setQueue:(struct queue { struct object { struct dispatch_object_s {} *x_1_1_1; } x1; })arg1;

@end
