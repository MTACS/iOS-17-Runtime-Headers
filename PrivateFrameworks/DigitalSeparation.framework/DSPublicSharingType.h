
@interface DSPublicSharingType : NSObject {
    NSMutableSet * _publicResources;
    <DSSource> * _source;
}

@property (nonatomic, readonly, copy) NSArray *allPublicResources;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) UIImage *iconForDetail;
@property (nonatomic, readonly) UIImage *iconForTable;
@property (nonatomic, readonly, copy) NSString *localizedDetailText;
@property (nonatomic, retain) NSMutableSet *publicResources;
@property (nonatomic, readonly) long long score;
@property (nonatomic, retain) <DSSource> *source;

// Image: /System/Library/PrivateFrameworks/DigitalSeparation.framework/DigitalSeparation

+ (void)initialize;

- (void).cxx_destruct;
- (void)addPublicResource:(id)arg1;
- (id)allPublicResources;
- (id)displayName;
- (unsigned long long)hash;
- (id)initWithSource:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDetailText;
- (id)publicResources;
- (void)removePublicResource:(id)arg1;
- (long long)score;
- (void)setPublicResources:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;
- (void)stopAllSharingOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSharingResource:(id)arg1 onQueue:(id)arg2 completion:(id /* block */)arg3;

// Image: /System/Library/PrivateFrameworks/DigitalSeparationUI.framework/DigitalSeparationUI

- (id)iconForDetail;
- (id)iconForTable;

@end
