
@interface TSPLazyReference : NSObject <NSCopying> {
    bool  _allowUnknownObject;
    TSPComponent * _component;
    <TSPLazyReferenceDelegate> * _delegate;
    long long  _identifier;
    bool  _isWeak;
    TSPObject * _strongObject;
    TSPObject * _weakObject;
}

@property (nonatomic) TSPComponent *component;
@property (nonatomic) <TSPLazyReferenceDelegate> *delegate;
@property (nonatomic, readonly) long long identifier;
@property (nonatomic) bool isWeak;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) id objectIfLoaded;
@property (nonatomic, retain) TSPObject *strongObject;
@property (nonatomic, readonly) TSPObject *weakObject;

+ (id)referenceForObject:(id)arg1;

- (void).cxx_destruct;
- (id)component;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)delegate;
- (bool)discardStrongObjectIfPossible;
- (unsigned long long)hash;
- (long long)identifier;
- (id)init;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 isWeak:(bool)arg3 allowUnknownObject:(bool)arg4;
- (id)initWithTSPObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLazyReference:(id)arg1;
- (bool)isWeak;
- (id)object;
- (id)objectIfLoaded;
- (bool)referencesObject:(id)arg1;
- (void)resetIdentifier;
- (void)setComponent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsWeak:(bool)arg1;
- (void)setStrongObject:(id)arg1;
- (id)strongObject;
- (id)weakObject;

@end
