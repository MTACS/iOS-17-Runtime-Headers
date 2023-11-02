
@interface HKJSONVisitor : NSObject {
    id  _JSONObject;
    NSArray * _allKeyPathComponents;
    long long  _currentIndex;
    NSString * _currentKeyPath;
    <HKJSONVisitorDelegate> * _delegate;
}

@property (nonatomic, readonly, copy) NSArray *allKeyPathComponents;
@property (nonatomic, readonly) long long currentIndex;
@property (nonatomic, readonly, copy) NSString *currentKeyPath;
@property (nonatomic, readonly, copy) NSString *lastKeyPathComponent;

+ (id)visitorWithJSONObject:(id)arg1 delegate:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (long long)_traverseJSONObject:(id)arg1;
- (long long)_visitArray:(id)arg1;
- (long long)_visitDictionary:(id)arg1;
- (long long)_visitPrimitive:(id)arg1;
- (id)allKeyPathComponents;
- (long long)currentIndex;
- (id)currentKeyPath;
- (id)lastKeyPathComponent;
- (void)traverseJSONObject;
- (id)valueForKeyPath:(id)arg1;

@end
