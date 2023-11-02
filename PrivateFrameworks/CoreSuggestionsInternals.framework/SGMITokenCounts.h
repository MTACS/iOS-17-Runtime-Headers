
@interface SGMITokenCounts : NSObject {
    NSNumber * _regularCount;
    NSNumber * _salientCount;
    NSString * _token;
}

@property (readonly) NSNumber *regularCount;
@property (readonly) NSNumber *salientCount;
@property (readonly) NSString *token;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithCount:(id)arg1 asSalient:(bool)arg2 token:(id)arg3;
- (id)initWithSalientCount:(id)arg1 regularCount:(id)arg2 token:(id)arg3;
- (id)newByAdding:(id)arg1 asSalient:(bool)arg2;
- (id)regularCount;
- (id)salientCount;
- (id)token;

@end
