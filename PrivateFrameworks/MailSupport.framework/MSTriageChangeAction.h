
@interface MSTriageChangeAction : NSObject <EFPubliclyDescribable> {
    long long  _action;
    NSIndexSet * _flagColors;
    bool  _flagState;
    NSDate * _readLaterDate;
}

@property (nonatomic, readonly) long long action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) NSIndexSet *flagColors;
@property (nonatomic, readonly) bool flagState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *readLaterDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)action;
- (id)description;
- (id)ef_publicDescription;
- (id)flagColors;
- (bool)flagState;
- (id)initWithChangeAction:(long long)arg1 flagState:(bool)arg2;
- (id)initWithChangeAction:(long long)arg1 flagState:(bool)arg2 flagColors:(id)arg3;
- (id)initWithChangeAction:(long long)arg1 flagState:(bool)arg2 flagColors:(id)arg3 readLaterDate:(id)arg4;
- (id)initWithChangeAction:(long long)arg1 flagState:(bool)arg2 readLaterDate:(id)arg3;
- (id)readLaterDate;

@end
