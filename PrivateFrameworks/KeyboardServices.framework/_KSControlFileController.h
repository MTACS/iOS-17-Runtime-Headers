
@interface _KSControlFileController : NSObject {
    NSURL * _url;
}

- (void).cxx_destruct;
- (bool)checkIfExists;
- (id)contents;
- (id)description;
- (id)initWithName:(id)arg1 inDirectory:(id)arg2;
- (void)reset;
- (void)setContents:(id)arg1;

@end
