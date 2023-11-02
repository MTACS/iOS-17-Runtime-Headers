
@interface STContainer : NSObject <STContainer> {
    struct container_object_s { } * _container;
    unsigned long long  _containerClass;
    NSString * _identifier;
    NSURL * _url;
}

@property (readonly) unsigned long long containerClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (readonly) NSURL *url;

+ (id)containerWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 personaUniqueString:(id)arg3;
+ (id)containersWithClass:(unsigned long long)arg1 personaUniqueString:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (void)dealloc;
- (unsigned long long)diskUsageWithError:(id*)arg1;
- (id)identifier;
- (id)initWithLibsystemContainer:(struct container_object_s { }*)arg1;
- (id)url;

@end
