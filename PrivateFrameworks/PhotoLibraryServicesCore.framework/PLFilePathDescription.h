
@interface PLFilePathDescription : NSObject {
    NSString * _path;
}

+ (id)descriptionWithFileURL:(id)arg1;
+ (id)descriptionWithPath:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)redactedDescription;

@end
