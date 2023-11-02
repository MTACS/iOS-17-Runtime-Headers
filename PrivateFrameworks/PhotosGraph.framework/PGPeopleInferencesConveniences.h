
@interface PGPeopleInferencesConveniences : NSObject

+ (bool)anyPersonNodes:(id)arg1 belongToBestSocialGroupsInGraph:(id)arg2;
+ (id)countedPersonNodesFromMomentNodes:(id)arg1 amongPersonNodes:(id)arg2;
+ (bool)isValidContact:(id)arg1;
+ (id)momentNodesAtHomeInMomentNodes:(id)arg1;
+ (id)momentNodesAtWorkInMomentNodes:(id)arg1;
+ (id)momentNodesByAddressNodeFromMomentNodes:(id)arg1;
+ (id)personLocalIdentifierByContactIdentifierFromPersonNodes:(id)arg1;
+ (bool)signalInRunOptions:(unsigned long long)arg1 signal:(unsigned long long)arg2;
+ (bool)socialGroupNodes:(id)arg1 intersectWithBestSocialGroupsInGraph:(id)arg2;
+ (id)topPersonNodeIdentifierForTwoPersonSocialGroupsFromPersonNodes:(id)arg1 personNodes:(id)arg2;

@end
