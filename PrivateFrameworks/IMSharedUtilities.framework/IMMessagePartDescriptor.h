
@interface IMMessagePartDescriptor : NSObject {
    bool  _hasLoadedTransferGUID;
    NSArray * _links;
    NSArray * _mapLocations;
    NSAttributedString * _messagePartBody;
    unsigned long long  _messagePartIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messagePartRange;
    NSString * _transferGUID;
}

@property (nonatomic) bool hasLoadedTransferGUID;
@property (nonatomic, readonly) NSArray *links;
@property (nonatomic, readonly) NSArray *mapLocations;
@property (nonatomic, readonly, copy) NSAttributedString *messagePartBody;
@property (nonatomic, readonly) unsigned long long messagePartIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly, copy) NSString *transferGUID;

+ (id)defaultPrefix;

- (void).cxx_destruct;
- (bool)hasLoadedTransferGUID;
- (id)initWithMessagePartBody:(id)arg1 messagePartIndex:(unsigned long long)arg2 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMessagePart:(id)arg1 ignoringRange:(bool)arg2;
- (id)links;
- (id)mapLocations;
- (id)messagePartBody;
- (id)messagePartGUIDForMessageGUID:(id)arg1;
- (unsigned long long)messagePartIndex;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (void)setHasLoadedTransferGUID:(bool)arg1;
- (id)transferGUID;

@end
