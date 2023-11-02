
@interface MLModelCollectionEntry : NSObject {
    NSString * _modelIdentifier;
    NSURL * _modelURL;
}

@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly) NSURL *modelURL;

+ (id)entryWithModelIdentifier:(id)arg1 modelURL:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithModelIdentifier:(id)arg1 modelUrl:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelCollectionEntry:(id)arg1;
- (id)modelIdentifier;
- (id)modelURL;

@end
