
@interface EDMessageActionProvider : NSObject {
    NSString * _ID;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSString *name;

- (void).cxx_destruct;
- (id)ID;
- (id)initWithID:(id)arg1 name:(id)arg2;
- (id)name;

@end
