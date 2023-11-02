
@interface brc_task_tracker : NSObject {
    _Atomic bool  cancelled;
    NSObject<OS_dispatch_group> * group;
    char * label;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
