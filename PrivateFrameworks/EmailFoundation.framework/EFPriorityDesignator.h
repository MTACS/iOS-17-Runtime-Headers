
@interface EFPriorityDesignator : NSObject {
    unsigned long long  _priority;
}

@property (nonatomic) unsigned long long priority;

+ (id)currentDesignator;
+ (id)currentDesignatorIfExists;
+ (id)currentDesignatorStack;
+ (id)currentDesignatorStackIfExists;
+ (void)destroyCurrentDesignator;
+ (id)installNewDesignator;
+ (id)pushNewDesignator;

- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;

@end
