
@interface AMSBagValue : NSObject <JetEngine.AnyAMSBagValue> {
    ACAccount * _account;
    <AMSBagDataSourceProtocol> * _dataSource;
    NSString * _key;
    NSArray * _transformBlocks;
    unsigned long long  _valueType;
}

@property (nonatomic, copy) ACAccount *account;
@property (nonatomic) <AMSBagDataSourceProtocol> *dataSource;
@property (nonatomic, retain) NSString *key;
@property (getter=isLoaded, nonatomic, readonly) bool loaded;
@property (nonatomic, retain) NSArray *transformBlocks;
@property (nonatomic) unsigned long long valueType;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (bool)_value:(id)arg1 isKindOfValueType:(unsigned long long)arg2;
+ (id)_valueFromDictionary:(id)arg1 forBagKey:(id)arg2;
+ (id)bagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 valuePromise:(id)arg3;
+ (id)failingBagValueWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3;
+ (id)frozenBagValueWithKey:(id)arg1 value:(id)arg2 valueType:(unsigned long long)arg3;
+ (id)globalBagValueStorage;

- (void).cxx_destruct;
- (void)_applyTransformsToValue:(id)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
- (void)_handleSuccessWithValue:(id)arg1 isDefault:(bool)arg2 completion:(id /* block */)arg3;
- (id)_processedDefaultValue:(id)arg1;
- (id)_processedDefaultValuePromise:(id)arg1;
- (id)account;
- (id)dataSource;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3;
- (id)initWithDataSource:(id)arg1 key:(id)arg2 valueType:(unsigned long long)arg3 account:(id)arg4;
- (bool)isLoaded;
- (id)key;
- (void)setAccount:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setTransformBlocks:(id)arg1;
- (void)setValueType:(unsigned long long)arg1;
- (id)transformBlocks;
- (id)transformWithBlock:(id /* block */)arg1;
- (id)valuePromise;
- (unsigned long long)valueType;
- (void)valueWithCompletion:(id /* block */)arg1;
- (id)valueWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

- (void)asyncValueOnQueue:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)asyncValuePromise;
- (id)asyncValuePromiseOnQueue:(id)arg1;
- (void)asyncValueWithCompletion:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (void)wlk_quietValueWithCompletion:(id /* block */)arg1;
- (id)wlk_quietValueWithError:(id*)arg1;

@end
