
@interface _ANEOutputSetEnqueue : NSObject {
    bool  _isOpenLoop;
    unsigned int  _procedureIndex;
    unsigned int  _setIndex;
    bool  _signalNotRequired;
    unsigned long long  _signalValue;
}

@property (nonatomic, readonly) bool isOpenLoop;
@property (nonatomic, readonly) unsigned int procedureIndex;
@property (nonatomic, readonly) unsigned int setIndex;
@property (nonatomic, readonly) bool signalNotRequired;
@property (nonatomic, readonly) unsigned long long signalValue;

+ (id)new;
+ (id)outputSetWithProcedureIndex:(unsigned int)arg1 setIndex:(unsigned int)arg2 signalValue:(unsigned long long)arg3 signalNotRequired:(bool)arg4 isOpenLoop:(bool)arg5;

- (id)init;
- (id)initOutputSetWithProcedureIndex:(unsigned int)arg1 setIndex:(unsigned int)arg2 signalValue:(unsigned long long)arg3 signalNotRequired:(bool)arg4 isOpenLoop:(bool)arg5;
- (bool)isOpenLoop;
- (unsigned int)procedureIndex;
- (unsigned int)setIndex;
- (bool)signalNotRequired;
- (unsigned long long)signalValue;

@end
