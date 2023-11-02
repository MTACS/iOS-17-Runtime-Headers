
@interface FTRegion : NSObject {
    NSDictionary * _dictionary;
    FTRegion * _parentRegion;
    NSArray * _subRegions;
}

@property (retain) NSDictionary *_dictionary;
@property (retain) FTRegion *_parentRegion;
@property (readonly) NSString *basePhoneNumber;
@property (readonly) NSString *isoCode;
@property (readonly) NSString *label;
@property (readonly) FTRegion *parentRegion;
@property (readonly) NSString *regionID;
@property (readonly) NSArray *subRegions;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (void).cxx_destruct;
- (id)_dictionary;
- (id)_initWithDictionary:(id)arg1;
- (id)_parentRegion;
- (void)_setParentRegion:(id)arg1;
- (id)basePhoneNumber;
- (void)dealloc;
- (id)description;
- (id)isoCode;
- (id)label;
- (id)parentRegion;
- (id)regionID;
- (id)regionWithID:(id)arg1;
- (void)set_dictionary:(id)arg1;
- (void)set_parentRegion:(id)arg1;
- (id)subRegions;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (bool)isLeafNode;
- (bool)search:(id)arg1 withResults:(id)arg2;

@end