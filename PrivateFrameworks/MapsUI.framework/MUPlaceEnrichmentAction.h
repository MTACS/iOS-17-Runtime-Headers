
@interface MUPlaceEnrichmentAction : NSObject <NSCopying> {
    unsigned long long  _actionType;
    NSDictionary * _enrichmentAction;
    unsigned long long  _mkActionType;
}

@property (nonatomic, readonly) unsigned long long actionType;
@property (nonatomic, readonly) NSDictionary *enrichmentAction;
@property (nonatomic, readonly) unsigned long long mkActionType;

- (void).cxx_destruct;
- (unsigned long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enrichmentAction;
- (id)initWithActionType:(unsigned long long)arg1 isValidated:(bool)arg2 mkActionType:(unsigned long long)arg3;
- (id)initWithActionType:(unsigned long long)arg1 isValidated:(bool)arg2 mkActionType:(unsigned long long)arg3 metadata:(id)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)mkActionType;

@end
