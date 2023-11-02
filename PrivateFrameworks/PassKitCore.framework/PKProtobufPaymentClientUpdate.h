
@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying> {
    PKProtobufAutomaticReloadPaymentRequest * _automaticReloadPaymentRequest;
    PKProtobufShippingMethods * _availableShippingMethods;
    PKProtobufDeferredPaymentRequest * _deferredPaymentRequest;
    struct { 
        unsigned int selectedPaymentType : 1; 
        unsigned int status : 1; 
    }  _has;
    NSMutableArray * _multiTokenContexts;
    NSMutableArray * _paymentSummaryItems;
    PKProtobufRecurringPaymentRequest * _recurringPaymentRequest;
    NSString * _remotePaymentRequestIdentifier;
    NSString * _selectedAID;
    unsigned int  _selectedPaymentType;
    NSMutableArray * _shippingMethods;
    unsigned int  _status;
}

@property (nonatomic, retain) PKProtobufAutomaticReloadPaymentRequest *automaticReloadPaymentRequest;
@property (nonatomic, retain) PKProtobufShippingMethods *availableShippingMethods;
@property (nonatomic, retain) PKProtobufDeferredPaymentRequest *deferredPaymentRequest;
@property (nonatomic, readonly) bool hasAutomaticReloadPaymentRequest;
@property (nonatomic, readonly) bool hasAvailableShippingMethods;
@property (nonatomic, readonly) bool hasDeferredPaymentRequest;
@property (nonatomic, readonly) bool hasRecurringPaymentRequest;
@property (nonatomic, readonly) bool hasRemotePaymentRequestIdentifier;
@property (nonatomic, readonly) bool hasSelectedAID;
@property (nonatomic) bool hasSelectedPaymentType;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSMutableArray *multiTokenContexts;
@property (nonatomic, retain) NSMutableArray *paymentSummaryItems;
@property (nonatomic, retain) PKProtobufRecurringPaymentRequest *recurringPaymentRequest;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;
@property (nonatomic, retain) NSString *selectedAID;
@property (nonatomic) unsigned int selectedPaymentType;
@property (nonatomic, retain) NSMutableArray *shippingMethods;
@property (nonatomic) unsigned int status;

+ (Class)multiTokenContextsType;
+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;

- (void).cxx_destruct;
- (void)addMultiTokenContexts:(id)arg1;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (id)automaticReloadPaymentRequest;
- (id)availableShippingMethods;
- (void)clearMultiTokenContexts;
- (void)clearPaymentSummaryItems;
- (void)clearShippingMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deferredPaymentRequest;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAutomaticReloadPaymentRequest;
- (bool)hasAvailableShippingMethods;
- (bool)hasDeferredPaymentRequest;
- (bool)hasRecurringPaymentRequest;
- (bool)hasRemotePaymentRequestIdentifier;
- (bool)hasSelectedAID;
- (bool)hasSelectedPaymentType;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)multiTokenContexts;
- (id)multiTokenContextsAtIndex:(unsigned long long)arg1;
- (unsigned long long)multiTokenContextsCount;
- (id)paymentSummaryItems;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentSummaryItemsCount;
- (bool)readFrom:(id)arg1;
- (id)recurringPaymentRequest;
- (id)remotePaymentRequestIdentifier;
- (id)selectedAID;
- (unsigned int)selectedPaymentType;
- (void)setAutomaticReloadPaymentRequest:(id)arg1;
- (void)setAvailableShippingMethods:(id)arg1;
- (void)setDeferredPaymentRequest:(id)arg1;
- (void)setHasSelectedPaymentType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setMultiTokenContexts:(id)arg1;
- (void)setPaymentSummaryItems:(id)arg1;
- (void)setRecurringPaymentRequest:(id)arg1;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)setSelectedAID:(id)arg1;
- (void)setSelectedPaymentType:(unsigned int)arg1;
- (void)setShippingMethods:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (id)shippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (unsigned int)status;
- (void)writeTo:(id)arg1;

@end
