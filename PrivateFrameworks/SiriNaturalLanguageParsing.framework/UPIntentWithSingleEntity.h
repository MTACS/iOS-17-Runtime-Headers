
@interface UPIntentWithSingleEntity : NSObject {
    UPEntityWithValue * _entity;
    NSString * _intent;
}

@property (readonly) UPEntityWithValue *entity;
@property (readonly) NSString *intent;

- (void).cxx_destruct;
- (id)entity;
- (id)initWithIntent:(id)arg1 singleEntity:(id)arg2;
- (id)intent;
- (bool)isEqualToIntentWithSingleEntity:(id)arg1;

@end
