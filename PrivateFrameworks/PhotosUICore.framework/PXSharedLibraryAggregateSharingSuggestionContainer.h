
@interface PXSharedLibraryAggregateSharingSuggestionContainer : NSObject <_PXSharedLibrarySharingSuggestionContainer> {
    NSDate * _aggregateBeforeDate;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _aggregationRange;
    NSSet * _px_sl_containedSharingSuggestionObjectIDs;
    NSArray * _px_sl_containedSharingSuggestions;
    PHAssetCollection * _px_sl_containerCollection;
    NSString * _px_sl_title;
    PHFetchResult * _sharingSuggestions;
}

@property (nonatomic, readonly) NSDate *aggregateBeforeDate;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } aggregationRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *px_sl_containedSharingSuggestionObjectIDs;
@property (nonatomic, readonly) NSArray *px_sl_containedSharingSuggestions;
@property (nonatomic, readonly) PHAssetCollection *px_sl_containerCollection;
@property (nonatomic, readonly) <NSCopying><NSObject> *px_sl_identifier;
@property (nonatomic, readonly) NSString *px_sl_title;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aggregateBeforeDate;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })aggregationRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithSharingSuggestions:(id)arg1 aggregateBeforeDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)px_sl_containedSharingSuggestionObjectIDs;
- (id)px_sl_containedSharingSuggestions;
- (id)px_sl_containerCollection;
- (id)px_sl_fetchAssetCollections;
- (void)px_sl_getKeyAsset:(id*)arg1 suggestedDate:(id*)arg2 locations:(id*)arg3;
- (id)px_sl_identifier;
- (id)px_sl_title;

@end
