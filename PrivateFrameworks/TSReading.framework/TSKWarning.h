
@interface TSKWarning : NSObject {
    NSArray * mInfos;
    unsigned int  mKind;
    NSString * mMessage;
    int  mSeverity;
}

@property (nonatomic, copy) NSArray *infos;
@property (nonatomic, readonly) unsigned int kind;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) int severity;

+ (id)warningWithMessage:(id)arg1;
+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 infos:(id)arg3;
+ (id)warningWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;
+ (id)warningWithMessage:(id)arg1 severity:(int)arg2;

- (void)dealloc;
- (unsigned long long)hash;
- (id)infos;
- (id)initWithMessage:(id)arg1 kind:(unsigned int)arg2 severity:(int)arg3 infos:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned int)kind;
- (id)message;
- (void)setInfos:(id)arg1;
- (void)setMessage:(id)arg1;
- (int)severity;

@end
