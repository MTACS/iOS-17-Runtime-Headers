
@interface TSPObject : NSObject {
    <TSPObjectDelegate> * _delegate;
    long long  _identifier;
    long long  _modifyObjectToken;
    long long  _unarchiverIdentifier;
    TSPUnknownContent * _unknownContent;
}

@property (nonatomic, readonly) bool allowsImplicitComponentOwnership;
@property (nonatomic, readonly) TSPObject *componentRootObject;
@property (nonatomic, readonly) TSPObjectContext *context;
@property (nonatomic, readonly) unsigned int delayedArchivingPriority;
@property (nonatomic, readonly) bool isCommandObject;
@property (nonatomic, readonly) bool isComponentRoot;
@property (nonatomic, readonly) bool needsArchiving;
@property (nonatomic, readonly) NSString *packageLocator;
@property (nonatomic, readonly) bool shouldDelayArchiving;
@property (nonatomic, readonly) bool storeOutsideObjectArchive;
@property (nonatomic) <TSPObjectDelegate> *tsp_delegate;
@property (nonatomic) long long tsp_identifier;
@property (nonatomic) long long tsp_modifyObjectToken;
@property (nonatomic, readonly) long long tsp_unarchiverIdentifier;
@property (nonatomic, readonly) TSPUnknownContent *tsp_unknownContent;

+ (bool)tsp_isTransientObjectIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (bool)allowsDuplicatesOutsideOfDocumentPackage;
- (bool)allowsImplicitComponentOwnership;
- (id)componentRootObject;
- (id)context;
- (unsigned int)delayedArchivingPriority;
- (void)didFinishUnarchiving;
- (void)didLoadChildObjectFromDocumentSupport:(id)arg1;
- (bool)dirtiesDocumentPackage;
- (id)documentRoot;
- (id)init;
- (id)initDocumentObjectWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isCommandObject;
- (bool)isComponentRoot;
- (bool)needsArchiving;
- (id)packageLocator;
- (void)setTsp_delegate:(id)arg1;
- (void)setTsp_identifier:(long long)arg1;
- (void)setTsp_modifyObjectToken:(long long)arg1;
- (bool)shouldDelayArchiving;
- (bool)storeOutsideObjectArchive;
- (id)tsp_delegate;
- (long long)tsp_identifier;
- (long long)tsp_modifyObjectToken;
- (long long)tsp_unarchiverIdentifier;
- (id)tsp_unknownContent;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
